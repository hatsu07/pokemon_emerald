	@ data/maps/VerdanturfTown/scripts.inc:88 VerdanturfTown_Text_BattleTentSign
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1E632E
gText_Rom_1E632E: @ 0x081E632E
	.string "バトルテント シダケタウン かいじょう\nみまもれ! ポケモンバトル$"
	.if (. - gText_Rom_1E632E) != 0x22
	.error "gText_Rom_1E632E must retain its original byte length"
	.endif
