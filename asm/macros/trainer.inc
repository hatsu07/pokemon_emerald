.macro trainer_header partyFlags:req, trainerClass:req, encounterMusicGender:req, trainerPic:req
    .byte \partyFlags
    .byte \trainerClass
    .byte \encounterMusicGender
    .byte \trainerPic
.endm

.macro trainer_items item1:req, item2:req, item3:req, item4:req
    .2byte \item1
    .2byte \item2
    .2byte \item3
    .2byte \item4
.endm

.macro trainer_party partySize:req, party:req
    .byte \partySize
    .space 3
    .4byte \party
.endm

@ trainer_entry argument order:
@   partyFlags, trainerClass, encounterMusicGender, trainerPic,
@   nameWord0, nameWord1, nameWord2,
@   item1, item2, item3, item4, partySize, party
.macro trainer_entry partyFlags:req, trainerClass:req, encounterMusicGender:req, trainerPic:req, nameWord0:req, nameWord1:req, nameWord2:req, item1:req, item2:req, item3:req, item4:req, partySize:req, party:req
    trainer_header \partyFlags, \trainerClass, \encounterMusicGender, \trainerPic
    .4byte \nameWord0, \nameWord1, \nameWord2
    trainer_items \item1, \item2, \item3, \item4
    trainer_party \partySize, \party
.endm
