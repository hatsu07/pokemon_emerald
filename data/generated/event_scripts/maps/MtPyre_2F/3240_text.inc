	@ data/maps/MtPyre_2F/scripts.inc:99 MtPyre_2F_Text_DezPostBattle
	.globl gText_Rom_2164D8
gText_Rom_2164D8: @ 0x082164D8
	.string "マコ『あたしたち ラブラブだから\nまけても へいき なんだもん!{EOS}"
	.if (. - gText_Rom_2164D8) > 0x21
	.error "gText_Rom_2164D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2164D8) < 0x21
	.space 0x21 - (. - gText_Rom_2164D8)
	.endif
