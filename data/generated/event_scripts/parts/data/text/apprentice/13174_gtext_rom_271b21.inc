	@ data/text/apprentice.inc:679 gText_ApprenticeWhichMove1
	.globl gText_Rom_271B21
gText_Rom_271B21: @ 0x08271B21
	.string "{PLAYER}せんせい こんにちは!\nまた おしえて ほしいことが あるの!\pぼくの {STR_VAR_1}に\nかっこいい わざを おしえたいの!\lおすすめは どっちかな?\p{STR_VAR_2}か {STR_VAR_3}が\nいいんだけど……$"
	.if (. - gText_Rom_271B21) > 0x5a
	.error "gText_Rom_271B21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271B21) < 0x5a
	.space 0x5a - (. - gText_Rom_271B21)
	.endif
