	@ data/maps/SeafloorCavern_Entrance/scripts.inc:59 SeafloorCavern_Entrance_Text_HearMagmaNearMossdeep
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_218524
gText_Rom_218524: @ 0x08218524
	.string "あーーーーーっ!\nみおぼえの ある そのかおは!\pこんな ところまで きたって ことは\nまた オレたちの ジャマをしに!?\pおまえ ごときが アクアだんに\nはむかおう だなんて\l100おくまんねん はえーんだよ!\pおまえにゃ マグマだんが おにあいさ!\p……そういえば トクサネの ちかくで\nマグマだんを みかけたっけな\pあいつら……\nほんっとーーに うみが にあわねえぜ!{EOS}"
	.if (. - gText_Rom_218524) != 0xbc
	.error "gText_Rom_218524 must retain its original byte length"
	.endif
