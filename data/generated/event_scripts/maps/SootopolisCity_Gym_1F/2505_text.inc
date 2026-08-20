	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:197 SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis
	.globl gText_Rom_20E741
gText_Rom_20E741: @ 0x0820E741
	.string "レインバッジを もっていると\nすべての ポケモンが\lユーに たいして すなおに なるでしょう\pはげしく ながれる たきも\nひでんわざ たきのぼりを つかって\lのぼれる ように してくれます\pそれから わたくしとの しょうぶを\nわすれないように これを……{EOS}"
	.if (. - gText_Rom_20E741) > 0x80
	.error "gText_Rom_20E741 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20E741) < 0x80
	.space 0x80 - (. - gText_Rom_20E741)
	.endif
