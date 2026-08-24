	@ src/battle_message.c:1473 gText_BattleSwitchWhich4
	.globl gText_BattleSwitchWhich4
gText_BattleSwitchWhich4: @ 0x085ABC01
	.string "{ESCAPE 4}{EOS}"
	.if (. - gText_BattleSwitchWhich4) > 0x4
	.error "gText_BattleSwitchWhich4 may not grow beyond its original slot"
	.endif
	.if (. - gText_BattleSwitchWhich4) < 0x4
	.space 0x4 - (. - gText_BattleSwitchWhich4)
	.endif
	@ analyzed canonical ROM range 0x085ABC05-0x085ABC0B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xAE, 0xFF, 0xC2, 0xCA, 0x00, 0x00, 0xFF
