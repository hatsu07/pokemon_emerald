	@ data/text/questionnaire.inc:42 MysteryGift_Text_TryUsingItAtLilycovePort
	.globl gText_Rom_244089
gText_Rom_244089: @ 0x08244089
	.string "ミナモシティの ふなつきば で\nつかえる ようですね\pぜひ ごりよう してみては\nいかがでしょうか?$"
	.if (. - gText_Rom_244089) > 0x33
	.error "gText_Rom_244089 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244089) < 0x33
	.space 0x33 - (. - gText_Rom_244089)
	.endif
