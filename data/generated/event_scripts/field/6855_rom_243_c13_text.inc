	@ field-script:0x242AFA FieldScriptText_243C13
	.globl gText_Rom_243C13
gText_Rom_243C13: @ 0x08243C13
	.string "おあずかりした　ポケモンに\nポケルスが　ついて　いるようです\pくわしいことは　わかって　いないのですが\nポケルスと　いうのは　ポケモンに　くっつく\lちいさな　せいめいたいで\lこれが　ついている　あいだ\lポケモンが　よく　そだつ　みたいです{EOS}"
	.if (. - gText_Rom_243C13) > 0x78
	.error "gText_Rom_243C13 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243C13) < 0x78
	.space 0x78 - (. - gText_Rom_243C13)
	.endif
