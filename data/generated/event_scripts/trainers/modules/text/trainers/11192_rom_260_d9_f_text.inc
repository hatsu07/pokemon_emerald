	@ data/text/trainers.inc:2870 Route126_Text_LeonardoPostBattle
	.globl gText_Rom_260D9F
gText_Rom_260D9F: @ 0x08260D9F
	.string "なんでも れんしゅう すれば\nうまく なるんだ!\pキミも わかい うちから\nいろいろ やっておけよ!$"
	.if (. - gText_Rom_260D9F) > 0x33
	.error "gText_Rom_260D9F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260D9F) < 0x33
	.space 0x33 - (. - gText_Rom_260D9F)
	.endif
