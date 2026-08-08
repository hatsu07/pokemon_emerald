	@ field-script:0x23A5AE FieldScriptText_23AEEB
	.globl gText_Rom_23AEEB
gText_Rom_23AEEB: @ 0x0823AEEB
	.string "あなたの　たいせんを　ひとつだけ\nパスに　きろくする　ことが　できます\pおともだち　との　たいせんか\nバトルチューブ　バトルピラミッド　いがいの\lバトルフロンティアでの\lたいせんが　きろくできます\pたいせんが　おわった　ときに\nきろく　するか　どうかを　きめられます"
	.byte EOS
	.if (. - gText_Rom_23AEEB) > 0x86
	.error "gText_Rom_23AEEB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23AEEB) < 0x86
	.space 0x86 - (. - gText_Rom_23AEEB)
	.endif
