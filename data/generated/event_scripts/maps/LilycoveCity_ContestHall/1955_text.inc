	@ data/maps/LilycoveCity_ContestHall/scripts.inc:385 LilycoveCity_ContestHall_Text_SuchCharmingCuteAppeals
	.globl gText_Rom_20804C
gText_Rom_20804C: @ 0x0820804C
	.string "しんさいん『おお\nみんな かわいい アピールだなあ！\pおおっ なんて かわいい\nみずあそびの アピールなんだろう！$"
	.if (. - gText_Rom_20804C) > 0x3a
	.error "gText_Rom_20804C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20804C) < 0x3a
	.space 0x3a - (. - gText_Rom_20804C)
	.endif
