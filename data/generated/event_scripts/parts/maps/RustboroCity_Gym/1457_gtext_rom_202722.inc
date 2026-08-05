	@ data/maps/RustboroCity_Gym/scripts.inc:176 RustboroCity_Gym_Text_RoxanneIntro (+1 aliases)
	.globl gText_Rom_202722
gText_Rom_202722: @ 0x08202722
	.string "わたくし カナズミ ポケモンジム\nリーダーの ツツジ といいます\pトレーナーズ スクールで\nまなんだこと しょうぶに いかしたくて\lジムリーダーに なったの\pあなた どのような ポケモンで\nどんなふうに たたかうのか\lわたくしに おしえて くださるかしら?$"
	.if (. - gText_Rom_202722) > 0x81
	.error "gText_Rom_202722 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202722) < 0x81
	.space 0x81 - (. - gText_Rom_202722)
	.endif
