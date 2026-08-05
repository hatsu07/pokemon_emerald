	@ data/text/apprentice.inc:827 gText_ApprenticeWinSpeechThanks9
	.globl gText_Rom_2731FF
gText_Rom_2731FF: @ 0x082731FF
	.string "{STR_VAR_1}\pあはぁ それいいね\nオーケイ オーケイ!\lおじさん ババーっと いってみるよ!\pそれじゃあ おわかれだ!\nいままで いろいろ ありがとうね\lいつか しょうぶも してくれよ!\pアディオース!$"
	.if (. - gText_Rom_2731FF) > 0x62
	.error "gText_Rom_2731FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2731FF) < 0x62
	.space 0x62 - (. - gText_Rom_2731FF)
	.endif
