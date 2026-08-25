	@ data/maps/MirageTower_4F/scripts.inc:61 MirageTower_4F_Text_TakeRootFossil
	.globl MirageTower_4F_Text_TakeRootFossil
MirageTower_4F_Text_TakeRootFossil: @ 0x0821CEBE
	.string "ねっこのカセキを みつけた!\pこの カセキを とると\nあしもとが くずれて しまいそうだ……\pねっこのカセキを とりますか?"
	.byte EOS
	.if (. - MirageTower_4F_Text_TakeRootFossil) > 0x3f
	.error "MirageTower_4F_Text_TakeRootFossil may not grow beyond its original slot"
	.endif
	.if (. - MirageTower_4F_Text_TakeRootFossil) < 0x3f
	.space 0x3f - (. - MirageTower_4F_Text_TakeRootFossil)
	.endif
	@ data/maps/MirageTower_4F/scripts.inc:64 MirageTower_4F_Text_LeftRootFossilAlone
	.globl MirageTower_4F_Text_LeftRootFossilAlone
MirageTower_4F_Text_LeftRootFossilAlone: @ 0x0821CEFD
	.string "{PLAYER}は ねっこのカセキを\nそのままに しておいた"
	.byte EOS
	.if (. - MirageTower_4F_Text_LeftRootFossilAlone) > 0x19
	.error "MirageTower_4F_Text_LeftRootFossilAlone may not grow beyond its original slot"
	.endif
	.if (. - MirageTower_4F_Text_LeftRootFossilAlone) < 0x19
	.space 0x19 - (. - MirageTower_4F_Text_LeftRootFossilAlone)
	.endif
	@ data/maps/MirageTower_4F/scripts.inc:67 MirageTower_4F_Text_TakeClawFossil
	.globl MirageTower_4F_Text_TakeClawFossil
MirageTower_4F_Text_TakeClawFossil: @ 0x0821CF16
	.string "ツメのカセキを みつけた!\pこの カセキを とると\nあしもとが くずれて しまいそうだ……\pツメのカセキを とりますか?"
	.byte EOS
	.if (. - MirageTower_4F_Text_TakeClawFossil) > 0x3d
	.error "MirageTower_4F_Text_TakeClawFossil may not grow beyond its original slot"
	.endif
	.if (. - MirageTower_4F_Text_TakeClawFossil) < 0x3d
	.space 0x3d - (. - MirageTower_4F_Text_TakeClawFossil)
	.endif
	@ data/maps/MirageTower_4F/scripts.inc:70 MirageTower_4F_Text_LeaveClawFossilAlone
	.globl MirageTower_4F_Text_LeaveClawFossilAlone
MirageTower_4F_Text_LeaveClawFossilAlone: @ 0x0821CF53
	.string "{PLAYER}は ツメのカセキを\nそのままに しておいた"
	.byte EOS
	.if (. - MirageTower_4F_Text_LeaveClawFossilAlone) > 0x18
	.error "MirageTower_4F_Text_LeaveClawFossilAlone may not grow beyond its original slot"
	.endif
	.if (. - MirageTower_4F_Text_LeaveClawFossilAlone) < 0x18
	.space 0x18 - (. - MirageTower_4F_Text_LeaveClawFossilAlone)
	.endif
	@ Embedded ROM bytes: file offset 0x21CF6B, size 0x42
	.byte 0x03, 0x71, 0xCF, 0x21, 0x08, 0x00, 0x29, 0xDE, 0x08, 0x02, 0x6A, 0x5A, 0x2B, 0x4F, 0x01, 0x06
	.byte 0x01, 0x8B, 0xCF, 0x21, 0x08, 0x2B, 0x50, 0x01, 0x06, 0x01, 0x9C, 0xCF, 0x21, 0x08, 0x6C, 0x02
	.byte 0x1A, 0x00, 0x80, 0x1F, 0x01, 0x1A, 0x01, 0x80, 0x01, 0x00, 0x09, 0x00, 0x53, 0x01, 0x00, 0x6C
	.byte 0x02, 0x1A, 0x00, 0x80, 0x1E, 0x01, 0x1A, 0x01, 0x80, 0x01, 0x00, 0x09, 0x00, 0x53, 0x01, 0x00
	.byte 0x6C, 0x02
