	@ field-script:0x212319 FieldScriptText_212335
	.globl gText_Rom_212335
gText_Rom_212335: @ 0x08212335
	.string "ぼく　かせきマニア……\nかせき　だいすき　ナイスガイ　さ……\pきみも　カセキが　ほしいの……？\pここで　みつかる　カセキは\nぜんぶ　ぼくの　ものだから　あげないよ……\pどうしても　ほしければ\nカセキの　みつかりそうな\lいわや　すなが　おおい　さばくでも\lさがして　みなよ……{EOS}"
	.if (. - gText_Rom_212335) > 0x8a
	.error "gText_Rom_212335 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_212335) < 0x8a
	.space 0x8a - (. - gText_Rom_212335)
	.endif
