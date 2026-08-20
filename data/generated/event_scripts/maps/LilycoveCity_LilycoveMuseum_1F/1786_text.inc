	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:167 LilycoveCity_LilycoveMuseum_1F_Text_NotDisturbYouTakeYourTime
	.globl gText_Rom_205E10
gText_Rom_205E10: @ 0x08205E10
	.string "では おじゃま いたしません から\nゆっくり みていって ください!{EOS}"
	.if (. - gText_Rom_205E10) > 0x23
	.error "gText_Rom_205E10 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205E10) < 0x23
	.space 0x23 - (. - gText_Rom_205E10)
	.endif
