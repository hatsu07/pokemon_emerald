	@ data/text/trainers.inc:2555 Route123_Text_EdIntro (+1 aliases)
	.globl gText_Rom_25FFCD
gText_Rom_25FFCD: @ 0x0825FFCD
	.string "トレーナーが いない ときは\nじぶんの ポケモンどうしを\lたたかわせて ながめて いるぞぅ$"
	.if (. - gText_Rom_25FFCD) > 0x2e
	.error "gText_Rom_25FFCD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FFCD) < 0x2e
	.space 0x2e - (. - gText_Rom_25FFCD)
	.endif
