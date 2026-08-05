	@ data/maps/LilycoveCity_ContestHall/scripts.inc:346 LilycoveCity_ContestHall_Text_AllSeemToUseDifferentMoves
	.globl gText_Rom_207D6A
gText_Rom_207D6A: @ 0x08207D6A
	.string "おなじ ポケモンを つかっていても\nトレーナーに よって\lぜんぜん ちがう わざで\lアピールして くるんだよね\pそれは しょうぶと いっしょだね！$"
	.if (. - gText_Rom_207D6A) > 0x4a
	.error "gText_Rom_207D6A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207D6A) < 0x4a
	.space 0x4a - (. - gText_Rom_207D6A)
	.endif
