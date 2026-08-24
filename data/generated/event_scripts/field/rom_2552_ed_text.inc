	@ field-script:0x25633A FieldScriptText_2552C5
	.globl FieldScriptText_2552C5
FieldScriptText_2552C5: @ 0x082552C5
	.string "……うーん　ものたりない　なあ\pもっと　すごい　はなしを\nきかせて　ほしいなあ"
	.byte EOS
	.if (. - FieldScriptText_2552C5) > 0x28
	.error "FieldScriptText_2552C5 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2552C5) < 0x28
	.space 0x28 - (. - FieldScriptText_2552C5)
	.endif
	@ field-script:0x256358 FieldScriptText_2552ED
	.globl FieldScriptText_2552ED
FieldScriptText_2552ED: @ 0x082552ED
	.string "もっと　たくさんの　ひとに\nでんせつの　トレーナーの　はなし\lきいて　ほしいなあ"
	.byte EOS
	.if (. - FieldScriptText_2552ED) > 0x29
	.error "FieldScriptText_2552ED may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2552ED) < 0x29
	.space 0x29 - (. - FieldScriptText_2552ED)
	.endif
	@ analyzed canonical ROM range 0x08255316-0x08255322
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x7A, 0x9F, 0xAE, 0x64, 0x2D, 0x00, 0x06, 0x07, 0x1F, 0x08, 0x50, 0x10, 0x00
