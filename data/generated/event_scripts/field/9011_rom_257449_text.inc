	@ field-script:0x2572EA FieldScriptText_257449
	.globl gText_Rom_257449
gText_Rom_257449: @ 0x08257449
	.string "プロフィールは　すきな　ことばを\n4つ　くみあわせて　つくるんだよ！\pこれから　ぼくが\nてきとうな　4つの　ことばで　つくった\lプロフィールを　みせるから\pきみは　その　ことばを\nすきなものに　いれかえて\lきみだけの　プロフィールに　してね！\pえらべる　ことばは\nすごく　たくさん　あるから\lグループに　わかれて　いるんだ\lポケモン　とか　せいかつ　とか　しゅみ…\lという　ぐあいにね！\pだから　まずは\nグループを　えらんで……\lそのあとに　えらんだ　グループの\lことばが　いくつも　でてくるから\lそこから　すきな　ことばを\lみつけてね！"
	.byte EOS
	.if (. - gText_Rom_257449) > 0x10e
	.error "gText_Rom_257449 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257449) < 0x10e
	.space 0x10e - (. - gText_Rom_257449)
	.endif
