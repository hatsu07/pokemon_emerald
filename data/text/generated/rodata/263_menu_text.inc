	@ src/data/script_menu.h:507 gText_BerryCrush3 (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC39E
gText_Rom_5CC39E: @ 0x085CC39E
	.string "きのみクラッシュ$"
	.if (. - gText_Rom_5CC39E) != 0x9
	.error "gText_Rom_5CC39E must retain its original byte length"
	.endif
	.globl gText_Rom_5CC3A1
	.set gText_Rom_5CC3A1, gText_Rom_5CC39E + 0x3
	.globl gUnknown_85CC3A7
gUnknown_85CC3A7: @ 0x085CC3A7

	@ src/strings.c:686 gText_WaitingTrainerFinishReading
	.globl gText_Rom_5CC3A7
gText_Rom_5CC3A7: @ 0x085CC3A7
	.string "あいてが カードを みおわるのを\nまっています$"
	.if (. - gText_Rom_5CC3A7) > 0x18
	.error "gText_Rom_5CC3A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC3A7) < 0x18
	.space 0x18 - (. - gText_Rom_5CC3A7)
	.endif
	.globl gUnknown_85CC3BF
gUnknown_85CC3BF: @ 0x085CC3BF

	@ src/strings.c:687 gText_PokeblocksWithFriends
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC3BF
gText_Rom_5CC3BF: @ 0x085CC3BF
	.string "ともだちと つくった ポロック$"
	.if (. - gText_Rom_5CC3BF) != 0x10
	.error "gText_Rom_5CC3BF must retain its original byte length"
	.endif
	.globl gText_Rom_5CC3CA
	.set gText_Rom_5CC3CA, gText_Rom_5CC3BF + 0xb
	.globl gUnknown_85CC3CF
gUnknown_85CC3CF: @ 0x085CC3CF

