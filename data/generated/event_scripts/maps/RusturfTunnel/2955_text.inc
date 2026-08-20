	@ data/maps/RusturfTunnel/scripts.inc:460 RusturfTunnel_Text_MikeIntro (+1 aliases)
	.globl gText_Rom_213D51
gText_Rom_213D51: @ 0x08213D51
	.string "おとこが やまに いるから やまおとこ!\pなのに ポケモンが やまに いても\nやまポケモンと いわないのは なぜだ?{EOS}"
	.if (. - gText_Rom_213D51) > 0x3b
	.error "gText_Rom_213D51 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_213D51) < 0x3b
	.space 0x3b - (. - gText_Rom_213D51)
	.endif
