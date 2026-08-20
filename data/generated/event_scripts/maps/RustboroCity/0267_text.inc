	@ data/maps/RustboroCity/scripts.inc:1141 RustboroCity_Text_MayPassedBrineyWantToBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1DF77D
gText_Rom_1DF77D: @ 0x081DF77D
	.string "ハルカ『そういえば トウカのもりで\nハギろうじんと すれちがったわ\pたぶん…… はまべの こやに\nもどるところ だったんじゃ ないかな!\pえーと…… それより {PLAYER}{KUN}の\nポケモンずかんの ちょうしは どう?\pあたしは かなり いい かんじ!\nどう? ちょっと しょうぶ してみる?{EOS}"
	.if (. - gText_Rom_1DF77D) != 0x8e
	.error "gText_Rom_1DF77D must retain its original byte length"
	.endif
