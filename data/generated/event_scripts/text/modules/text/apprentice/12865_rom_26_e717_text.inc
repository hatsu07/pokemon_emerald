	@ data/text/apprentice.inc:217 gText_ApprenticePleaseTeach14
	.globl gText_Rom_26E717
gText_Rom_26E717: @ 0x0826E717
	.string "あ…… あ……\n{PLAYER}{KUN} だよね?\lそ そんなに みないで くれよ!\lてれるだろ\pワシは {STR_VAR_1}と いって\nは はずかしい けど\lいせきを さがしたり して くらしてるんだ\pでも バトルフロンティア にも\nはずかしながら き きょうみが あるんだ\p{PLAYER}{KUN}は ポケモン つよいって\nひょうばん だから……\lその いいづらいん だけど\lひとつ おねがいを したいんだ\pワシの せんせいに なって\nアドバイスして もらえない かな……?"
	.byte EOS
	.if (. - gText_Rom_26E717) > 0xd8
	.error "gText_Rom_26E717 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E717) < 0xd8
	.space 0xd8 - (. - gText_Rom_26E717)
	.endif
