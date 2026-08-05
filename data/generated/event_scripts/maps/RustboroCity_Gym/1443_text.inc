	@ data/maps/RustboroCity_Gym/scripts.inc:148 RustboroCity_Gym_Text_JoshPostBattle
	.globl gText_Rom_202647
gText_Rom_202647: @ 0x08202647
	.string "いわタイプの おそろしさ\nまだまだ こんな ものじゃない!$"
	.if (. - gText_Rom_202647) > 0x1e
	.error "gText_Rom_202647 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202647) < 0x1e
	.space 0x1e - (. - gText_Rom_202647)
	.endif
