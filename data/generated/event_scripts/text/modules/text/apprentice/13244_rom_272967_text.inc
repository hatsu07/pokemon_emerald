	@ data/text/apprentice.inc:784 gText_ApprenticeWinSpeechThanks2
	.globl gText_Rom_272967
gText_Rom_272967: @ 0x08272967
	.string "{STR_VAR_1}\p……かっこいいですね!\nそれ つかわせて いただきます!\pじゃあ ぼくは これから\nいろんな ところで しょうぶ してきます!\pいつか {PLAYER}さんと\nしょうぶ する ひが\lくるかも しれませんね!\pでは こんどは しょうぶの ば で\nおあい しましょう!$"
	.if (. - gText_Rom_272967) > 0x82
	.error "gText_Rom_272967 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272967) < 0x82
	.space 0x82 - (. - gText_Rom_272967)
	.endif
