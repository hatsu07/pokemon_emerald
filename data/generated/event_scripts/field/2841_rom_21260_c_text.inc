	@ field-script:0x212515 FieldScriptText_21260C
	.globl gText_Rom_21260C
gText_Rom_21260C: @ 0x0821260C
	.string "けんきゅう　ようの　ノートだ\nボックスに　ついて　かかれている！\pボックス1つに　30ぴきの\nポケモンを　あずけられる　ようにする\pパソコンには　ぜんぶで　420ひきの\nポケモンを　あずけられる　ようにする\pつづきを　よみますか？{EOS}"
	.if (. - gText_Rom_21260C) > 0x74
	.error "gText_Rom_21260C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21260C) < 0x74
	.space 0x74 - (. - gText_Rom_21260C)
	.endif
