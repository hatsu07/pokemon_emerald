	@ field-script:0x214F16 FieldScriptText_2157ED
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2157ED
gText_Rom_2157ED: @ 0x082157ED
	.string "{ESCAPE}{0x01}　デコボコさんどう\nとおりぬけると　フエンタウン{EOS}"
	.if (. - gText_Rom_2157ED) != 0x1c
	.error "gText_Rom_2157ED must retain its original byte length"
	.endif
