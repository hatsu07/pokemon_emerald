	@ data/text/apprentice.inc:778 gText_ApprenticeWinSpeechThanks1
	.globl gText_Rom_27288C
gText_Rom_27288C: @ 0x0827288C
	.string "{STR_VAR_1}\pうわあー いーね!\nじゃあ ボク それで いくね!\pせんせい いままで ありがとう!\nボク これから いろんな ところで\lがんばる ことに する!\pこんど あうときは しょうぶ だよ!$"
	.if (. - gText_Rom_27288C) > 0x60
	.error "gText_Rom_27288C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27288C) < 0x60
	.space 0x60 - (. - gText_Rom_27288C)
	.endif
