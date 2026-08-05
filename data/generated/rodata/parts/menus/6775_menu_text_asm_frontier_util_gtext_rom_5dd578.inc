	@ asm/frontier_util.s:6932 CopyFrontierBrainText
	@ Preserve exact byte length: internal label, semantic suffix text pointer.
	.globl gText_Rom_5DD578
gText_Rom_5DD578: @ 0x085DD578
	.string "ばヘらくヌヘらくモホらくぁホらくKヘらくちホらくZホらくっヘらくゲヘらくビホらくぱホらくiヘらくにホらく{0xF7}{0x6E}らくクヘらくブヘらく6ホらくケホらくÜヘらくひホらくたマらくソヘらく♂ヘらくMホらくヌホらくけホらくみホらくぉマらくリaスく…aスくデaスくRaスく　あああああああああああああ　あああ　あああああああああ　ああああああああああ　あああ　あ　　　　あ　あああ　あああああああああああああ　ああああ　　ああ　　　あ　ああああ　あああああ　ああ　　　ああ　あ　　　　　　　　　　　　　　　　　　あああああああああああああ　　　あ　あ　ああ　あ　ああ　　あ　　ああああ　ああ　　あああ　あ　ああ　　　ああ　あ　あ　あ　あ$"
	.if (. - gText_Rom_5DD578) != 0x137
	.error "gText_Rom_5DD578 must retain its original byte length"
	.endif
