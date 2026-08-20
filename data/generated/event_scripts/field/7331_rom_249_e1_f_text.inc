	@ field-script:0x248C1E FieldScriptText_249E1F
	.globl gText_Rom_249E1F
gText_Rom_249E1F: @ 0x08249E1F
	.string "コンテストには　5しゅるい　あります！\pかっこよさ　うつくしさ　かわいさ\nかしこさ　そして　たくましさ\lいじょうの　5しゅるい　です！\pエントリー　する　ポケモンに\nピッタリの　コンテストを\lえらんで　あげて　くださいね！{EOS}"
	.if (. - gText_Rom_249E1F) > 0x70
	.error "gText_Rom_249E1F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_249E1F) < 0x70
	.space 0x70 - (. - gText_Rom_249E1F)
	.endif
