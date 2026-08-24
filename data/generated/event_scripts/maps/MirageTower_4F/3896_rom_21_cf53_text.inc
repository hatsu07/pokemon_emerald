	@ data/maps/MirageTower_4F/scripts.inc:61 MirageTower_4F_Text_TakeRootFossil
	.globl gText_Rom_21CEBE
gText_Rom_21CEBE: @ 0x0821CEBE
	.string "ねっこのカセキを みつけた!\pこの カセキを とると\nあしもとが くずれて しまいそうだ……\pねっこのカセキを とりますか?"
	.byte EOS
	.if (. - gText_Rom_21CEBE) > 0x3f
	.error "gText_Rom_21CEBE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CEBE) < 0x3f
	.space 0x3f - (. - gText_Rom_21CEBE)
	.endif
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
	@ data/maps/MirageTower_4F/scripts.inc:67 MirageTower_4F_Text_TakeClawFossil
	.globl gText_Rom_21CF16
gText_Rom_21CF16: @ 0x0821CF16
	.string "ツメのカセキを みつけた!\pこの カセキを とると\nあしもとが くずれて しまいそうだ……\pツメのカセキを とりますか?"
	.byte EOS
	.if (. - gText_Rom_21CF16) > 0x3d
	.error "gText_Rom_21CF16 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CF16) < 0x3d
	.space 0x3d - (. - gText_Rom_21CF16)
	.endif
	@ data/maps/MirageTower_4F/scripts.inc:70 MirageTower_4F_Text_LeaveClawFossilAlone
	.globl gText_Rom_21CF53
gText_Rom_21CF53: @ 0x0821CF53
	.string "{PLAYER}は ツメのカセキを\nそのままに しておいた"
	.byte EOS
	.if (. - gText_Rom_21CF53) > 0x18
	.error "gText_Rom_21CF53 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CF53) < 0x18
	.space 0x18 - (. - gText_Rom_21CF53)
	.endif
	@ Embedded ROM bytes: file offset 0x21CF6B, size 0x42
	.byte 0x03, 0x71, 0xCF, 0x21, 0x08, 0x00, 0x29, 0xDE, 0x08, 0x02, 0x6A, 0x5A, 0x2B, 0x4F, 0x01, 0x06
	.byte 0x01, 0x8B, 0xCF, 0x21, 0x08, 0x2B, 0x50, 0x01, 0x06, 0x01, 0x9C, 0xCF, 0x21, 0x08, 0x6C, 0x02
	.byte 0x1A, 0x00, 0x80, 0x1F, 0x01, 0x1A, 0x01, 0x80, 0x01, 0x00, 0x09, 0x00, 0x53, 0x01, 0x00, 0x6C
	.byte 0x02, 0x1A, 0x00, 0x80, 0x1E, 0x01, 0x1A, 0x01, 0x80, 0x01, 0x00, 0x09, 0x00, 0x53, 0x01, 0x00
	.byte 0x6C, 0x02
