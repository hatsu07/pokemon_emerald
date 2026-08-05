	@ data/text/apprentice.inc:211 gText_ApprenticeWhichLevelMode13
	.globl gText_Rom_26E678
gText_Rom_26E678: @ 0x0826E678
	.string "ありがとう わるいね\n……ゴホ ゴホっ!\pうう はやく きたえなきゃ……\nすぐに バトルタワーに いくから\lレベル50のへや オープンレベルのへや\lどっちが いいか きめてくれるかい?"
	.byte EOS
	.if (. - gText_Rom_26E678) > 0x5d
	.error "gText_Rom_26E678 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E678) < 0x5d
	.space 0x5d - (. - gText_Rom_26E678)
	.endif
