	@ field-script:0x241CF9 FieldScriptText_242236
	.globl gText_Rom_242236
gText_Rom_242236: @ 0x08242236
	.string "おおっ！　それは！\nオレが　さがしている　かけら！！\pなっ　なっ！\nきみの　もってる　おたからと\lオレの　おたから　こうかん　してくれよ！{EOS}"
	.if (. - gText_Rom_242236) > 0x46
	.error "gText_Rom_242236 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_242236) < 0x46
	.space 0x46 - (. - gText_Rom_242236)
	.endif
