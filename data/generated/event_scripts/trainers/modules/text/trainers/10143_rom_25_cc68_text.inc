	@ data/text/trainers.inc:1328 Route114_Text_StevePostBattle
	.globl gText_Rom_25CC68
gText_Rom_25CC68: @ 0x0825CC68
	.string "からだが おおきくて ゴツゴツ かたくて\nおおきな ツノと するどい キバ……\lうふふふふ……\lそんな ポケモンが ほしいなぁ……{EOS}"
	.if (. - gText_Rom_25CC68) > 0x42
	.error "gText_Rom_25CC68 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CC68) < 0x42
	.space 0x42 - (. - gText_Rom_25CC68)
	.endif
