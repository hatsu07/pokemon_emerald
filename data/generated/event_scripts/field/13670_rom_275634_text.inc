	@ field-script:0x1FB176 FieldScriptText_275634
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_275634
gText_Rom_275634: @ 0x08275634
	.string "おまちして　おりましたよ！\pちょうせんを　さいかいする　まえに\nレポートを　かきます！{EOS}"
	.if (. - gText_Rom_275634) != 0x2c
	.error "gText_Rom_275634 must retain its original byte length"
	.endif
