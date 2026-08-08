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
.if (. - .Ltrainer_entry_start\@) != 0x20
    .error "trainer_entry must emit 0x20 bytes"
.endif
.endm
