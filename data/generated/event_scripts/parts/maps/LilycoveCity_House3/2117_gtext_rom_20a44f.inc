	@ data/maps/LilycoveCity_House3/scripts.inc:109 LilycoveCity_House3_Text_HappyToHaveQuadruplets
	.globl gText_Rom_20A44F
gText_Rom_20A44F: @ 0x0820A44F
	.string "よつごが うまれた ときは\nすごく ビックリ したが\lみんなで なかよく あそんでいる すがたを\lみていると しあわせ きぶんに なるよ！$"
	.if (. - gText_Rom_20A44F) > 0x46
	.error "gText_Rom_20A44F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20A44F) < 0x46
	.space 0x46 - (. - gText_Rom_20A44F)
	.endif
