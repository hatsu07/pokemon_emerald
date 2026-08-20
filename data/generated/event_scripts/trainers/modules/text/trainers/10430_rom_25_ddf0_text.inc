	@ data/text/trainers.inc:1742 Route117_Text_MariaIntro (+1 aliases)
	.globl gText_Rom_25DDF0
gText_Rom_25DDF0: @ 0x0825DDF0
	.string "トライアスロンの れんしゅう\nポケモンと いっしょに してるからさ\lスピードに じしん あるよ!{EOS}"
	.if (. - gText_Rom_25DDF0) > 0x31
	.error "gText_Rom_25DDF0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DDF0) < 0x31
	.space 0x31 - (. - gText_Rom_25DDF0)
	.endif
