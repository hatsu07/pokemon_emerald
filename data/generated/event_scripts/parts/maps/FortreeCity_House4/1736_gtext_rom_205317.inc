	@ data/maps/FortreeCity_House4/scripts.inc:77 FortreeCity_House4_Text_FriendsFarAwayThanksToWingull
	.globl gText_Rom_205317
gText_Rom_205317: @ 0x08205317
	.string "キャモメの おかげで\nとおくの ともだちとも なかよし なのさ!$"
	.if (. - gText_Rom_205317) > 0x21
	.error "gText_Rom_205317 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205317) < 0x21
	.space 0x21 - (. - gText_Rom_205317)
	.endif
