	@ data/maps/SeafloorCavern_Entrance/scripts.inc:59 SeafloorCavern_Entrance_Text_HearMagmaNearMossdeep
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl SeafloorCavern_Entrance_Text_HearMagmaNearMossdeep
SeafloorCavern_Entrance_Text_HearMagmaNearMossdeep: @ 0x08218524
	.string "あーーーーーっ!\nみおぼえの ある そのかおは!\pこんな ところまで きたって ことは\nまた オレたちの ジャマをしに!?\pおまえ ごときが アクアだんに\nはむかおう だなんて\l100おくまんねん はえーんだよ!\pおまえにゃ マグマだんが おにあいさ!\p……そういえば トクサネの ちかくで\nマグマだんを みかけたっけな\pあいつら……\nほんっとーーに うみが にあわねえぜ!{EOS}"
	.if (. - SeafloorCavern_Entrance_Text_HearMagmaNearMossdeep) != 0xbc
	.error "SeafloorCavern_Entrance_Text_HearMagmaNearMossdeep must retain its original byte length"
	.endif
	@ data/maps/SeafloorCavern_Entrance/scripts.inc:62 SeafloorCavern_Entrance_Text_HearMagmaNearMossdeepShort
	.globl SeafloorCavern_Entrance_Text_HearMagmaNearMossdeepShort
SeafloorCavern_Entrance_Text_HearMagmaNearMossdeepShort: @ 0x082185E0
	.string "おまえ ごときが アクアだんに\nはむかおう だなんて\l100おくまんねん はえーんだよ!\pおまえにゃ マグマだんが おにあいさ!\p……そういえば トクサネの ちかくで\nマグマだんを みかけたっけな\pあいつら……\nほんっとーーに うみが にあわねえぜ!{EOS}"
	.if (. - SeafloorCavern_Entrance_Text_HearMagmaNearMossdeepShort) > 0x7e
	.error "SeafloorCavern_Entrance_Text_HearMagmaNearMossdeepShort may not grow beyond its original slot"
	.endif
	.if (. - SeafloorCavern_Entrance_Text_HearMagmaNearMossdeepShort) < 0x7e
	.space 0x7e - (. - SeafloorCavern_Entrance_Text_HearMagmaNearMossdeepShort)
	.endif
	@ Embedded ROM bytes: file offset 0x21865E, size 0x2F
	.byte 0x00, 0x5C, 0x00, 0x06, 0x00, 0x00, 0x00
	.4byte SeafloorCavern_Room1_Text_Grunt1Intro
	.4byte SeafloorCavern_Room1_Text_Grunt1Defeat
	.byte 0x0F
	.byte 0x00
	.4byte SeafloorCavern_Room1_Text_Grunt1PostBattle
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0x07, 0x00, 0x00, 0x00, 0xD5, 0x86
	.byte 0x21, 0x08, 0xFC, 0x86, 0x21, 0x08, 0x0F, 0x00, 0x0C, 0x87, 0x21, 0x08, 0x09, 0x06, 0x02
