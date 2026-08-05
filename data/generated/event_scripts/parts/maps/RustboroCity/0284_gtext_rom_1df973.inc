	@ data/maps/RustboroCity/scripts.inc:1190 RustboroCity_Text_BrendanPassedBrineyWantToBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1DF973
gText_Rom_1DF973: @ 0x081DF973
	.string "ユウキ『そういえば {PLAYER}\pさっき トウカのもりで\nハギろうじんと すれちがったよ\pたぶん…… はまべの こやに\nもどるところ だったんじゃ ないかな!\pえーと…… それより {PLAYER}の\nポケモンずかんは どう?\lちょっとは ページ うまったか?\pオレは すごいよ!\nどうだ ポケモン しょうぶで\lそのせいかを ためして やろうか?$"
	.if (. - gText_Rom_1DF973) != 0xa4
	.error "gText_Rom_1DF973 must retain its original byte length"
	.endif
