	@ asm/record_mixing.s:3855 SanitizeEmeraldBattleTowerRecord
	.globl gText_Rom_5CCECD
gText_Rom_5CCECD: @ 0x085CCECD
	.string "pokemon$"
	.if (. - gText_Rom_5CCECD) > 0x8
	.error "gText_Rom_5CCECD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCECD) < 0x8
	.space 0x8 - (. - gText_Rom_5CCECD)
	.endif
