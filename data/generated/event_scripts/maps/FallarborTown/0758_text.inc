	@ data/maps/FallarborTown/scripts.inc:69 FallarborTown_Text_BattleTentSign
	.globl gText_Rom_1E5FF7
gText_Rom_1E5FF7: @ 0x081E5FF7
	.string "バトルテント ハジツゲタウン かいじょう\nつどえ! さいきょう チーム{EOS}"
	.if (. - gText_Rom_1E5FF7) > 0x24
	.error "gText_Rom_1E5FF7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E5FF7) < 0x24
	.space 0x24 - (. - gText_Rom_1E5FF7)
	.endif
