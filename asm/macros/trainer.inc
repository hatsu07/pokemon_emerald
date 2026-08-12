@ Japanese Emerald struct Trainer layout (0x20 bytes).
@
@   0x00 u8  partyFlags
@   0x01 u8  trainerClass
@   0x02 u8  encounterMusic_gender
@   0x03 u8  trainerPic
@   0x04 u8  trainerName[6]      @ max 5 JP characters + EOS
@   0x0A u16 items[4]
@   0x12 u8  doubleBattle
@   0x13 u8  padding
@   0x14 u32 aiFlags
@   0x18 u8  partySize
@   0x19 u8  padding[3]
@   0x1C u32 party
@
@ The previous macro incorrectly treated 0x04-0x0F as a 12-byte name,
@ which merged trainer items into the apparent name words.

.macro trainer_entry partyFlags:req, trainerClass:req, encounterMusicGender:req, trainerPic:req, name0:req, name1:req, name2:req, name3:req, name4:req, name5:req, item1:req, item2:req, item3:req, item4:req, doubleBattle:req, aiFlags:req, partySize:req, party:req
.Ltrainer_entry_start\@:
    .byte \partyFlags, \trainerClass, \encounterMusicGender, \trainerPic
    .byte \name0, \name1, \name2, \name3, \name4, \name5
    .2byte \item1, \item2, \item3, \item4
    .byte \doubleBattle
    .byte 0 @ alignment
    .4byte \aiFlags
    .byte \partySize
    .space 3, 0
    .4byte \party
.if (. - .Ltrainer_entry_start\@) != TRAINER_ENTRY_SIZE
    .error "trainer_entry must emit TRAINER_ENTRY_SIZE bytes"
.endif
.endm

@ Trainer graphics tables.
@
@ gTrainerFrontPicCoords is a 93-entry table of 4-byte records:
@   u8 size; u8 yOffset; u8 padding[2]
@
@ The original raw conversion accidentally grouped bytes such as
@   08 01 00 00 08
@ as ".byte 0x08" followed by the apparent ROM pointer 0x08000001.
@ These macros keep the real record boundaries explicit.

.macro trainer_front_pic_coords trainerPic:req, yOffset:req
    .if ((. - gTrainerFrontPicCoords) / 4) != \trainerPic
        .error "trainer_front_pic_coords order does not match TRAINER_PIC_*"
    .endif
    .byte 8, \yOffset, 0, 0
.endm

@ struct CompressedSpriteSheet-compatible trainer table entry:
@   const void *data; u16 size; u16 trainerPic
.macro trainer_front_pic_entry pic:req, size:req, trainerPic:req
    .4byte \pic
    .2byte \size, \trainerPic
.endm

@ Trainer palette table entry:
@   const void *palette; u32 trainerPic
.macro trainer_front_palette_entry palette:req, trainerPic:req
    .4byte \palette, \trainerPic
.endm

@ Trainer back-picture coordinate record:
@   u8 size; u8 yOffset; u8 padding[2]
.macro trainer_back_pic_coords trainerBackPic:req, yOffset:req
    .if ((. - gTrainerBackPicCoords) / TRAINER_PIC_COORDS_ENTRY_SIZE) != \trainerBackPic
        .error "trainer_back_pic_coords order does not match TRAINER_BACK_PIC_*"
    .endif
    .byte 8, \yOffset, 0, 0
.endm

@ Trainer back-picture table entry:
@   const void *data; u16 size; u16 trainerBackPic
.macro trainer_back_pic_entry pic:req, size:req, trainerBackPic:req
    .4byte \pic
    .2byte \size, \trainerBackPic
.endm

@ Trainer back-palette table entry:
@   const void *palette; u32 trainerBackPic
.macro trainer_back_palette_entry palette:req, trainerBackPic:req
    .4byte \palette, \trainerBackPic
.endm

@ One 64x64 4bpp frame inside an uncompressed trainer back sprite.
@ This removes adjacency-dependent spellings such as
@ gTrainerBackPic_Wally + 0x2000 for the first Steven frame.
.macro trainer_back_frame_entry pic:req, frame:req
    .4byte \pic + (MON_PIC_SIZE * \frame), MON_PIC_SIZE
.endm

@ gTrainers entry with canonical opponent ID.
@ Emits no ID field; trainerId is a build-time assertion for the array index.
.macro trainer_entry_by_id trainerId:req, partyFlags:req, trainerClass:req, encounterMusicGender:req, trainerPic:req, name0:req, name1:req, name2:req, name3:req, name4:req, name5:req, item1:req, item2:req, item3:req, item4:req, doubleBattle:req, aiFlags:req, partySize:req, party:req
    .if ((. - gTrainers) % TRAINER_ENTRY_SIZE) != 0
        .error "gTrainers entry is not TRAINER_ENTRY_SIZE-aligned"
    .endif
    .if ((. - gTrainers) / TRAINER_ENTRY_SIZE) != \trainerId
        .error "gTrainers entry order does not match TRAINER_* opponent ID"
    .endif

    trainer_entry \partyFlags, \trainerClass, \encounterMusicGender, \trainerPic, \name0, \name1, \name2, \name3, \name4, \name5, \item1, \item2, \item3, \item4, \doubleBattle, \aiFlags, \partySize, \party
.endm

@ Trainer party member structures.
@ These mirror the four TrainerMon layouts used by the engine.

.macro trainer_mon_no_item_default iv:req, level:req, species:req
.Ltrainer_mon_start\@:
    .2byte \iv
    .byte \level, 0
    .2byte \species
    .2byte 0 @ ABI padding
    .if (. - .Ltrainer_mon_start\@) != TRAINER_MON_NO_ITEM_DEFAULT_SIZE
        .error "trainer_mon_no_item_default emitted unexpected size"
    .endif
.endm

.macro trainer_mon_no_item_custom iv:req, level:req, species:req, move1:req, move2:req, move3:req, move4:req
.Ltrainer_mon_start\@:
    .2byte \iv
    .byte \level, 0
    .2byte \species
    .2byte \move1, \move2, \move3, \move4
    .2byte 0 @ ABI padding
    .if (. - .Ltrainer_mon_start\@) != TRAINER_MON_NO_ITEM_CUSTOM_SIZE
        .error "trainer_mon_no_item_custom emitted unexpected size"
    .endif
.endm

.macro trainer_mon_item_default iv:req, level:req, species:req, item:req
.Ltrainer_mon_start\@:
    .2byte \iv
    .byte \level, 0
    .2byte \species
    .2byte \item
    .if (. - .Ltrainer_mon_start\@) != TRAINER_MON_ITEM_DEFAULT_SIZE
        .error "trainer_mon_item_default emitted unexpected size"
    .endif
.endm

.macro trainer_mon_item_custom iv:req, level:req, species:req, item:req, move1:req, move2:req, move3:req, move4:req
.Ltrainer_mon_start\@:
    .2byte \iv
    .byte \level, 0
    .2byte \species
    .2byte \item
    .2byte \move1, \move2, \move3, \move4
    .if (. - .Ltrainer_mon_start\@) != TRAINER_MON_ITEM_CUSTOM_SIZE
        .error "trainer_mon_item_custom emitted unexpected size"
    .endif
.endm

@ struct TrainerMoney:
@   u8 trainerClass; u8 value; u16 ABI padding
.macro trainer_money_entry trainerClass:req, value:req
.Ltrainer_money_start\@:
    .byte \trainerClass, \value
    .2byte 0 @ ABI padding
    .if (. - .Ltrainer_money_start\@) != TRAINER_MONEY_ENTRY_SIZE
        .error "trainer_money_entry emitted unexpected size"
    .endif
.endm
