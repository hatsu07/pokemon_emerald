	@ data/maps/RustboroCity_Gym/scripts.inc:201 RustboroCity_Gym_Text_StoneBadgeInfoTakeThis
	.globl gText_Rom_202849
gText_Rom_202849: @ 0x08202849
	.string "ストーンバッジ には あなたの\nポケモンの こうげきりょくを\lたかめる こうかが あるの\pあと たたかっていない ときでも\nひでんわざの いあいぎり が\lつかえるようにも なるわ\pそれから……\nこれも もっていって ください{EOS}"
	.if (. - gText_Rom_202849) > 0x71
	.error "gText_Rom_202849 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202849) < 0x71
	.space 0x71 - (. - gText_Rom_202849)
	.endif
