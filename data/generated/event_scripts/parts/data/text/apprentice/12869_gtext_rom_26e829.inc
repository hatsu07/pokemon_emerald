	@ data/text/apprentice.inc:223 gText_ApprenticeWhichLevelMode14
	.globl gText_Rom_26E829
gText_Rom_26E829: @ 0x0826E829
	.string "あ ありがとう……\pいや だから そんなに みないで くれよ\nてれるだろ\pめを あわせずに こたえて くれ!\pば バトルタワ…… バトルタワー だが\nどの レベルに ちょうせん すれば いい?"
	.byte EOS
	.if (. - gText_Rom_26E829) > 0x61
	.error "gText_Rom_26E829 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E829) < 0x61
	.space 0x61 - (. - gText_Rom_26E829)
	.endif
