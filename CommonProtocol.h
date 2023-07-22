#pragma once

enum en_PROTOCOL_TYPE
{
	
	////////////////////////////////////////////////////////
	//
	//	Client & Server Protocol
	//
	////////////////////////////////////////////////////////

	en_LOGIN_LOGINSERVER_REQ = 1,
	//------------------------------------------------------------
	// Client → Login Server 로그인 요청
	//
	//	{
	//		SHORT	Type
	//
	//		char    LoginType // google 로그인(1), 자체로그인(2)
	//		WCHAR	Email[50]; // 로그인용 이메일
	//		short   TokenLength // 구글 인증 토큰 길이(LoginType = 2일시 무시)
	//		char	Token[...]	// 구글 인증 토큰 1~2048 bytes
	//	}
	//
	//------------------------------------------------------------

	en_LOGIN_LOGINSERVER_RES = 2,
	//------------------------------------------------------------
	// Login Server → Client 로그인 응답
	//
	//	{
	//		SHORT	Type
	//
	//		char    ResponseType //  만료(1), 잘못된토큰(2), 없는계정(3), 너는 밴됐다(4), 성공(0)
	//		char	Key[64]; // 인증키. 게임서버로 로그인시 해당 키를 같이 송신한다
	//		WCHAR   IP[20]  // 접속할 게임서버의 ip
	//		int     Port	// 접속할 게임서버의 port
	//	}
	//
	//------------------------------------------------------------



	en_LOGIN_GAMESERVER_REQ = 3,
	en_LOGIN_GAMESERVER_RES = 4,

};

