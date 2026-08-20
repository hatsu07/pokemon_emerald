	@ field-script:0x21D551 FieldScriptText_246688
	.globl gText_Rom_246688
gText_Rom_246688: @ 0x08246688
	.string "とうろくした　ひみつきちは\nあいてが　ひっこしを　しないかぎり\lなくなる　ことは　ありません\pとうろく　リストから　さくじょすると\nほかの　ひみつきちに\lかわることが　あります\pとうろくは　10かしょ　まで　できます{EOS}"
	.if (. - gText_Rom_246688) > 0x6d
	.error "gText_Rom_246688 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_246688) < 0x6d
	.space 0x6d - (. - gText_Rom_246688)
	.endif
