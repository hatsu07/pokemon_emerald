	@ data/maps/MirageTower_4F/scripts.inc:64 MirageTower_4F_Text_LeftRootFossilAlone
	.globl gText_Rom_21CEFD
gText_Rom_21CEFD: @ 0x0821CEFD
	.string "{PLAYER}は ねっこのカセキを\nそのままに しておいた"
	.byte EOS
	.if (. - gText_Rom_21CEFD) > 0x19
	.error "gText_Rom_21CEFD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CEFD) < 0x19
	.space 0x19 - (. - gText_Rom_21CEFD)
	.endif
