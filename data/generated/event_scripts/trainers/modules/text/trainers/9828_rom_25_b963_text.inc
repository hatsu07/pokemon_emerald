	@ data/text/trainers.inc:875 Route110_Text_AlyssaIntro (+1 aliases)
	.globl gText_Rom_25B963
gText_Rom_25B963: @ 0x0825B963
	.string "サイクリングロード から おちちゃった!\nはずかしい…… しょうぶで まぎらわすわ!$"
	.if (. - gText_Rom_25B963) > 0x2b
	.error "gText_Rom_25B963 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B963) < 0x2b
	.space 0x2b - (. - gText_Rom_25B963)
	.endif
