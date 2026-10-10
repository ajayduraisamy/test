
def _make_client() -> TestClient:
    from app.main import create_app
    from app.core import database as db_module

    engine = create_engine(
        "sqlite://",
        connect_args={"check_same_thread": False},
        poolclass=StaticPool,
    )
    