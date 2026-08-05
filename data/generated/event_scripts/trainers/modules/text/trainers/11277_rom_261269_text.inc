	@ data/text/trainers.inc:2996 Route128_Text_KatelynIntro (+1 aliases)
	.globl gText_Rom_261269
gText_Rom_261269: @ 0x08261269
	.string "トライアスロンは\nすいえい じてんしゃ マラソン\p3つの しゅもくを つづけて こなす\nかこくな レースなの!$"
	.if (. - gText_Rom_261269) > 0x38
	.error "gText_Rom_261269 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261269) < 0x38
	.space 0x38 - (. - gText_Rom_261269)
	.endif
