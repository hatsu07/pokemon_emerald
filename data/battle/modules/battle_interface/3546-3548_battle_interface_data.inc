	@ pret/pokeemerald-jp direct xref for 0x085ABC38: battle_interface.s: AddTextPrinterAndCreateWindowOnHealthbox
	.globl gBattleInterfaceData_085ABC38
gBattleInterfaceData_085ABC38: @ 0x085ABC38
	@ analyzed canonical ROM range 0x085ABC38-0x085ABC3A
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x3 bytes=3
	.byte 0xFC, 0x02, 0x02
	@ src/battle_message.c:1475 gText_SafariBalls
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_SafariBalls
gText_SafariBalls: @ 0x085ABC3B
	.string "サファリボール{EOS}"
	.if (. - gText_SafariBalls) != 0x8
	.error "gText_SafariBalls must retain its original byte length"
	.endif
	.globl gText_Rom_5ABC43

	@ asm/battle_interface.s:4834 sub_08074320
	.globl gText_Rom_5ABC43
gText_Rom_5ABC43: @ 0x085ABC43
	.string "{HIGHLIGHT}{0x02}のこり　{EOS}"
	.if (. - gText_Rom_5ABC43) > 0x8
	.error "gText_Rom_5ABC43 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC43) < 0x8
	.space 0x8 - (. - gText_Rom_5ABC43)
	.endif

	@ asm/battle_interface.s:4844 sub_08074320
	.globl gText_Rom_5ABC4B
gText_Rom_5ABC4B: @ 0x085ABC4B
	.string "{HIGHLIGHT}{0x02}こ{EOS}"
	.if (. - gText_Rom_5ABC4B) > 0x5
	.error "gText_Rom_5ABC4B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC4B) < 0x5
	.space 0x5 - (. - gText_Rom_5ABC4B)
	.endif
