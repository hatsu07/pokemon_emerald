.macro wildmon minLevel:req, maxLevel:req, species:req
    .byte \minLevel
    .byte \maxLevel
    .2byte \species
.endm

.macro wildmoninfo encounterRate:req, mons:req
    .byte \encounterRate
    .byte 0
    .byte 0
    .byte 0
    .4byte \mons
.endm

@ Battle Pyramid encounter slot
@ index is 1-based and selects an entry from PyramidWildMon[8].
.macro pyramidmonslot minLevel:req, maxLevel:req, index:req
	.byte \minLevel
	.byte \maxLevel
	.byte \index
	.byte 0
.endm

@ Battle Pyramid wild Pokémon data
.macro pyramidwildmon species:req, level:req, ability:req, move1:req, move2:req, move3:req, move4:req
        .2byte \species
        .byte \level
        .byte \ability
        .2byte \move1
        .2byte \move2
        .2byte \move3
        .2byte \move4
.endm

.macro pikewildmon species, levelDelta, move1, move2, move3, move4
	.2byte \species
	.byte \levelDelta
	.byte 0 @ padding
	.2byte \move1
	.2byte \move2
	.2byte \move3
	.2byte \move4
.endm

.macro massoutbreak species, level, mapNum, move1, move2, move3, move4
	.2byte \species
	.2byte \move1
	.2byte \move2
	.2byte \move3
	.2byte \move4
	.byte \level
	.byte \mapNum
.endm
